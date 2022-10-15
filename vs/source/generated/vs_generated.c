/*==============================================================================================================
	* Copyright: 2022 John Jackson
	* File: vs_generated.c
	* Note: This file has been generated. Any and ALL local changes will be lost.

	All Rights Reserved

	BSD 3-Clause License

	Copyright (c) 2022 John Jackson

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

	1. Redistributions of source code must retain the above copyright notice, this
		list of conditions and the following disclaimer.

	2. Redistributions in binary form must reproduce the above copyright notice,
		this list of conditions and the following disclaimer in the documentation
		and/or other materials provided with the distribution.

	3. Neither the name of the copyright holder nor the names of its contributors may be used to
		endorse or promote products derived from this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
	DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
	ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

==============================================================================================================*/

// Includes
#include "vs_generated.h"

#include "core/generated/gs_core_generated.h"

// Class Ids
#define vs_t_cls_id 201

/* vs_t */

GS_API_DECL uint32_t
vs_t_class_id()
{
	return vs_t_cls_id;
}

GS_API_DECL const gs_meta_class_t*
vs_t_class()
{
	return gs_core_meta_obj_info_w_cls_id(vs_t_cls_id)->cls;
}

GS_API_DECL const gs_core_meta_info_t*
vs_t_info()
{
	return gs_core_meta_obj_info_w_cls_id(vs_t_cls_id);
}

GS_API_DECL void
vs_t_init(vs_t* obj)
{
	gs_core_cast(obj, gs_core_base_t)->id = vs_t_class_id();
}

GS_API_DECL vs_t*
vs_t_new()
{
	vs_t* obj = gs_malloc_init(vs_t);
	vs_t_init(obj);
	return obj;
}

GS_API_DECL vs_t
vs_t_ctor()
{
	vs_t obj = gs_default_val();
	vs_t_init(&obj);
	return obj;
}

GS_API_DECL void
vs_t_dtor(gs_core_obj_t* obj)
{
}

GS_API_DECL void
vs_t_vtable_t_init(vs_t_vtable_t* vt)
{
	gs_core_app_t_vtable_t_init((gs_core_app_t_vtable_t*)vt);
	vt->init = vs_init;
	vt->update = vs_update;
	vt->shutdown = vs_shutdown;
	vt->render = vs_render;
	vt->cls_id = vs_t_class_id;
	vt->cls = vs_t_class;
	vt->obj_init= vs_t_init;
	vt->obj_dtor= vs_t_dtor;
}

GS_API_DECL vs_t_vtable_t
vs_t_vtable_t_ctor()
{
	vs_t_vtable_t vt = gs_default_val();
	vs_t_vtable_t_init(&vt);
	return vt;
}

GS_API_DECL gs_core_vtable_t*
vs_t_vtable_t_new()
{
	vs_t_vtable_t* vt = gs_malloc_init(vs_t_vtable_t);
	vs_t_vtable_t_init(vt);
	return (gs_core_vtable_t*)vt;
}

//============[ Registry ]===============//

//Static Objects
static vs_t g_1 = {0};

GS_API_DECL void
vs_meta_register()
{
	gs_core_meta_registry_t* meta = gs_core_instance()->meta;
	gs_meta_class_t* cls = NULL;
	gs_meta_class_t* base = NULL;
	gs_core_meta_info_t* info = NULL;
	gs_core_network_rpc_t* rpc = NULL;
	uint64_t cid = 0;
	uint32_t cnt = 0;
	uint32_t idx = 0;

	/* vs_t */
	{
		cid = gs_meta_class_register(&meta->registry, (&(gs_meta_class_decl_t){
			.name = gs_to_str(vs_t),
			.properties = (gs_meta_property_t[]){0},
			.size = 0 * sizeof(gs_meta_property_t)
		}));

		gs_core_meta_info_t ci = {0};
		uint32_t hndl = vs_t_class_id();
		gs_core_meta_info_t* info = gs_slot_array_getp(meta->info, hndl);
		gs_core_cast(&g_1, gs_core_base_t)->id = vs_t_class_id();
		info->instance = gs_core_cast(&g_1, gs_core_obj_t);
		info->cls = gs_meta_class_get(&meta->registry, vs_t);
		info->cid = hndl;
		uint32_t bid = gs_core_cls_cid(gs_core_app_t);
		info->base = gs_core_cls_info(gs_core_app_t);
		info->vtable = vs_t_vtable_t_new();
		vs_t_vtable_t_init(info->vtable);
	}

}

GS_API_DECL void
vs_meta_unregister()
{
	gs_core_entities_t* ents = gs_core_instance()->entities;

	{
		gs_core_meta_registry_t* meta = gs_core_instance()->meta;
		gs_assert(meta);
		gs_core_meta_info_t* info = gs_slot_array_getp(meta->info, vs_t_cls_id);
		gs_assert(info);
		if (info->cls) {
			gs_meta_class_unregister(&meta->registry, info->cls->id);
		}
		info->cls = NULL;
		info->base = NULL;
		if (info->vtable)
		{
			gs_free(info->vtable);
			info->vtable = NULL;
		}
	}
}

//=====[ Component/System Registration ]=====//

GS_API_DECL void
vs_meta_ecs_register()
{
	gs_core_entities_t* ents = gs_core_instance()->entities;

	// Components


	// Systems

}

//======[ Systems ]======//

