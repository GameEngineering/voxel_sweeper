/*==============================================================================================================
	* Copyright: 2022 John Jackson
	* File: vs_generated.h
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

#ifndef vs_GENERATED_H
#define vs_GENERATED_H

// Includes
#include "core/gs_core_object.h"
#include "core/gs_core_gs.h"
#include "core/gs_core_object.h"
#include "..\..\/source/editor/vs_editor.h"
#include "..\..\/source/vs.h"

//======[ Components ]=======//

GS_API_DECL void
vs_meta_ecs_register();


//======[ Systems ]=======//


//======[ Classes ]=======//

#define vs_t_vtable_t_methods\
	gs_core_app_t_vtable_t_methods

/* vs_t */

GS_API_DECL uint32_t
vs_t_class_id();

GS_API_DECL const gs_meta_class_t*
vs_t_class();

GS_API_DECL const gs_core_meta_info_t*
vs_t_info();

GS_API_DECL vs_t*
vs_t_new();

GS_API_DECL void
vs_t_init(vs_t* obj);

GS_API_DECL vs_t
vs_t_ctor();

GS_API_DECL void
vs_t_dtor(gs_core_obj_t* obj);

typedef struct vs_t_vtable_s
{
	vs_t_vtable_t_methods
} vs_t_vtable_t;

GS_API_DECL void
vs_t_vtable_t_init(vs_t_vtable_t* vt);

GS_API_DECL vs_t_vtable_t
vs_t_vtable_t_ctor();

//========================//

//============[ Registry ]===============//

GS_API_DECL void
vs_meta_register();

GS_API_DECL void
vs_meta_ecs_register();

GS_API_DECL void
vs_meta_unregister();

#endif // GENERATED_H

