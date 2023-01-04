/*
 * Copyright 2020-2022 AVSystem <avsystem@avsystem.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/**
 * Generated by anjay_codegen.py on 2021-07-21 16:09:26
 *
 * LwM2M Object: Location
 * ID: 6, URN: urn:oma:lwm2m:oma:6, Optional, Single
 *
 * This LwM2M Object provides a range of location telemetry related
 * information which can be queried by the LwM2M Server.
 */
#include <assert.h>
#include <stdbool.h>

#include <anjay/anjay.h>
#include <avsystem/commons/avs_defs.h>
#include <avsystem/commons/avs_memory.h>

#include "../gps.h"
#include "../utils.h"
#include "objects.h"

/**
 * Latitude: R, Single, Mandatory
 * type: float, range: N/A, unit: lat
 * The decimal notation of latitude, e.g. -43.5723 [World Geodetic System
 * 1984].
 */
#define RID_LATITUDE 0

/**
 * Longitude: R, Single, Mandatory
 * type: float, range: N/A, unit: lon
 * The decimal notation of longitude, e.g. 153.21760 [World Geodetic
 * System 1984].
 */
#define RID_LONGITUDE 1

/**
 * Altitude: R, Single, Optional
 * type: float, range: N/A, unit: m
 * The decimal notation of altitude in meters above sea level.
 */
#define RID_ALTITUDE 2

/**
 * Radius: R, Single, Optional
 * type: float, range: N/A, unit: m
 * The value in this resource indicates the radius of a circular area in
 * meters. The circular area is used to describe uncertainty about a
 * point for coordinates in a two-dimensional coordinate reference
 * systems (CRS). The center point of a circular area is specified by
 * using the Latitude and the Longitude Resources.
 */
#define RID_RADIUS 3

/**
 * Velocity: R, Single, Optional
 * type: opaque, range: N/A, unit: N/A
 * The velocity of the LwM2M Client, as defined in [3GPP-TS_23.032].
 */
#define RID_VELOCITY 4

/**
 * Timestamp: R, Single, Mandatory
 * type: time, range: N/A, unit: N/A
 * The timestamp of when the location measurement was performed.
 */
#define RID_TIMESTAMP 5

/**
 * Speed: R, Single, Optional
 * type: float, range: N/A, unit: m/s
 * Speed is the time rate of change in position of a LwM2M Client without
 * regard for direction: the scalar component of velocity.
 */
#define RID_SPEED 6

#ifdef CONFIG_ANJAY_CLIENT_LOCATION_OBJECT
struct location_object {
	const anjay_dm_object_def_t *def;
	struct gps_data cached_read;
};

static inline struct location_object *get_obj(const anjay_dm_object_def_t *const *obj_ptr)
{
	assert(obj_ptr);
	return AVS_CONTAINER_OF(obj_ptr, struct location_object, def);
}

static int list_resources(anjay_t *anjay, const anjay_dm_object_def_t *const *obj_ptr,
			  anjay_iid_t iid, anjay_dm_resource_list_ctx_t *ctx)
{
	(void)anjay;
	(void)obj_ptr;
	(void)iid;

	anjay_dm_emit_res(ctx, RID_LATITUDE, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
	anjay_dm_emit_res(ctx, RID_LONGITUDE, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);

#if CONFIG_ANJAY_CLIENT_GPS_ALTITUDE
	anjay_dm_emit_res(ctx, RID_ALTITUDE, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
#endif // CONFIG_ANJAY_CLIENT_GPS_ALTITUDE

#if CONFIG_ANJAY_CLIENT_GPS_RADIUS
	anjay_dm_emit_res(ctx, RID_RADIUS, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
#endif // CONFIG_ANJAY_CLIENT_GPS_RADIUS

#if CONFIG_ANJAY_CLIENT_GPS_VELOCITY
	anjay_dm_emit_res(ctx, RID_VELOCITY, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
#endif // CONFIG_ANJAY_CLIENT_GPS_VELOCITY

	anjay_dm_emit_res(ctx, RID_TIMESTAMP, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);

#if CONFIG_ANJAY_CLIENT_GPS_SPEED
	anjay_dm_emit_res(ctx, RID_SPEED, ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
#endif // CONFIG_ANJAY_CLIENT_GPS_SPEED
	return 0;
}

static int resource_read(anjay_t *anjay, const anjay_dm_object_def_t *const *obj_ptr,
			 anjay_iid_t iid, anjay_rid_t rid, anjay_riid_t riid,
			 anjay_output_ctx_t *ctx)
{
	(void)anjay;

	struct location_object *obj = get_obj(obj_ptr);

	assert(obj);
	assert(iid == 0);

	if (!obj->cached_read.valid) {
		return ANJAY_ERR_METHOD_NOT_ALLOWED;
	}

	switch (rid) {
	case RID_TIMESTAMP:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_i64(ctx, obj->cached_read.timestamp);

	case RID_LATITUDE:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_double(ctx, obj->cached_read.latitude);

	case RID_LONGITUDE:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_double(ctx, obj->cached_read.longitude);

#if CONFIG_ANJAY_CLIENT_GPS_ALTITUDE
	case RID_ALTITUDE:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_double(ctx, obj->cached_read.altitude);
#endif // CONFIG_ANJAY_CLIENT_GPS_ALTITUDE

#if CONFIG_ANJAY_CLIENT_GPS_RADIUS
	case RID_RADIUS:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_double(ctx, obj->cached_read.radius);
#endif // CONFIG_ANJAY_CLIENT_GPS_RADIUS

#if CONFIG_ANJAY_CLIENT_GPS_VELOCITY
	case RID_VELOCITY:
// TODO: implement velocity binary format as in 3GPP-TS_23.032
#error "velocity binary format not implemented yet"

		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_bytes(ctx, "", 0);
#endif // CONFIG_ANJAY_CLIENT_GPS_VELOCITY

#if CONFIG_ANJAY_CLIENT_GPS_SPEED
	case RID_SPEED:
		assert(riid == ANJAY_ID_INVALID);
		return anjay_ret_double(ctx, obj->cached_read.speed);
#endif // CONFIG_ANJAY_CLIENT_GPS_SPEED

	default:
		return ANJAY_ERR_METHOD_NOT_ALLOWED;
	}
}

static const anjay_dm_object_def_t OBJ_DEF = { .oid = 6,
					       .handlers = { .list_instances =
								     anjay_dm_list_instances_SINGLE,

							     .list_resources = list_resources,
							     .resource_read = resource_read } };

const anjay_dm_object_def_t **location_object_create(void)
{
	struct location_object *obj =
		(struct location_object *)avs_calloc(1, sizeof(struct location_object));
	if (!obj) {
		return NULL;
	}
	obj->def = &OBJ_DEF;
	obj->cached_read.valid = false;

	return &obj->def;
}

void location_object_update(anjay_t *anjay, const anjay_dm_object_def_t *const *def)
{
	if (!anjay || !def) {
		return;
	}

	struct location_object *obj = get_obj(def);

	SYNCHRONIZED(gps_read_last_mtx)
	{
		if (gps_read_last.valid && gps_read_last.timestamp != obj->cached_read.timestamp) {
			obj->cached_read = gps_read_last;
		}
	}

	anjay_notify_changed(anjay, obj->def->oid, 0, RID_TIMESTAMP);
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_LATITUDE);
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_LONGITUDE);
#if CONFIG_ANJAY_CLIENT_GPS_ALTITUDE
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_ALTITUDE);
#endif // CONFIG_ANJAY_CLIENT_GPS_ALTITUDE
#if CONFIG_ANJAY_CLIENT_GPS_RADIUS
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_RADIUS);
#endif // CONFIG_ANJAY_CLIENT_GPS_RADIUS
#if CONFIG_ANJAY_CLIENT_GPS_VELOCITY
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_VELOCITY);
#endif // CONFIG_ANJAY_CLIENT_GPS_VELOCITY
#if CONFIG_ANJAY_CLIENT_GPS_SPEED
	anjay_notify_changed(anjay, obj->def->oid, 0, RID_SPEED);
#endif // CONFIG_ANJAY_CLIENT_GPS_SPEED
}

void location_object_release(const anjay_dm_object_def_t ***out_def)
{
	const anjay_dm_object_def_t **def = *out_def;

	if (def) {
		struct location_object *obj = get_obj(def);

		avs_free(obj);
		*out_def = NULL;
	}
}
#else // CONFIG_ANJAY_CLIENT_LOCATION_OBJECT
const anjay_dm_object_def_t **location_object_create(void)
{
	return NULL;
}

void location_object_update(anjay_t *anjay, const anjay_dm_object_def_t *const *def)
{
	(void)anjay;
	(void)def;
}

void location_object_release(const anjay_dm_object_def_t ***out_def)
{
	(void)out_def;
}
#endif // CONFIG_ANJAY_CLIENT_LOCATION_OBJECT