/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "common.h"
#include "config.h"
#include "utils.h"
#include "persistence.h"

#include "processing.h"

static int cmd_fogml_start(const struct shell *shell, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	if (atomic_load(&processing_initialized)) {
		shell_warn(shell, "Processing already started.");
		return 0;
	}

	shell_print(shell, "Starting FogML");
    process_sensor_data();
	shell_print(shell, "FogML started");

	return 0;
}

static int cmd_fogml_stop(const struct shell *shell, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	shell_print(shell, "Stopping FogML");
    stop_processing();
	shell_print(shell, "FogML stopped");

	return 0;
}

static int cmd_fogml_verbose(const struct shell *shell, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	atomic_store(&fogml_verbose, !atomic_load(&fogml_verbose));

	if (atomic_load(&fogml_verbose)) {
		shell_print(shell, "FogML verbose mode on.");
		fogml_verbose_set(true);
	} else {
		shell_print(shell, "FogML verbose mode off.");
		fogml_verbose_set(false);
	}

	return 0;
}

static int cmd_fogml_state(const struct shell *shell, size_t argc, char **argv)
{
	ARG_UNUSED(argc);
	ARG_UNUSED(argv);

	shell_print(shell, "Model Version: %d", FOGML_MODEL_VERSION);
	shell_print(shell, "Number of classes: %d", FOGML_LABELS_COUNT);

	if (atomic_load(&processing_initialized)) {
		shell_print(shell, "Processing initialized.");
	} else {
		shell_print(shell, "Processing not yet started.");
	}

	return 0;
}


SHELL_STATIC_SUBCMD_SET_CREATE(
	sub_fogml, 
    SHELL_CMD(start, NULL, "Start FogML", cmd_fogml_start),
	SHELL_CMD(stop, NULL, "Stop FogML", cmd_fogml_stop),
	SHELL_CMD(state, NULL, "Show FogML state", cmd_fogml_state),
	SHELL_CMD(verbose, NULL, "FogML verbose mode", cmd_fogml_verbose),
	SHELL_SUBCMD_SET_END);

SHELL_CMD_REGISTER(fogml, &sub_fogml, "FogML commands", NULL);