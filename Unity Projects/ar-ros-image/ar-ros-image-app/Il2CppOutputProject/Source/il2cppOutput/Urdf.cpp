#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// RosSharp.Urdf.Joint
struct Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16;
// RosSharp.Urdf.Joint/Axis
struct Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981;
// RosSharp.Urdf.Joint/Calibration
struct Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D;
// RosSharp.Urdf.Joint/Dynamics
struct Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414;
// RosSharp.Urdf.Joint/Limit
struct Limit_t8B3010548996C99E84D77A6B895243131E180DAC;
// RosSharp.Urdf.Joint/Mimic
struct Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5;
// RosSharp.Urdf.Joint/SafetyController
struct SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325;
// RosSharp.Urdf.Link/Inertial
struct Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410;
// RosSharp.Urdf.Link/Inertial/Inertia
struct Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F;
// RosSharp.Urdf.Origin
struct Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66;
// RosSharp.Urdf.Plugin
struct Plugin_t5AA3372B6CCEECED22FBC300DC3821055231415C;
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
// System.String
struct String_t;


struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4EAFDECF299557777161805758240D64540B9A54 
{
public:

public:
};


// System.Object


// RosSharp.Urdf.Joint
struct Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16  : public RuntimeObject
{
public:
	// System.String RosSharp.Urdf.Joint::name
	String_t* ___name_0;
	// System.String RosSharp.Urdf.Joint::type
	String_t* ___type_1;
	// RosSharp.Urdf.Origin RosSharp.Urdf.Joint::origin
	Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * ___origin_2;
	// System.String RosSharp.Urdf.Joint::parent
	String_t* ___parent_3;
	// System.String RosSharp.Urdf.Joint::child
	String_t* ___child_4;
	// RosSharp.Urdf.Joint/Axis RosSharp.Urdf.Joint::axis
	Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * ___axis_5;
	// RosSharp.Urdf.Joint/Calibration RosSharp.Urdf.Joint::calibration
	Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D * ___calibration_6;
	// RosSharp.Urdf.Joint/Dynamics RosSharp.Urdf.Joint::dynamics
	Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * ___dynamics_7;
	// RosSharp.Urdf.Joint/Limit RosSharp.Urdf.Joint::limit
	Limit_t8B3010548996C99E84D77A6B895243131E180DAC * ___limit_8;
	// RosSharp.Urdf.Joint/Mimic RosSharp.Urdf.Joint::mimic
	Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 * ___mimic_9;
	// RosSharp.Urdf.Joint/SafetyController RosSharp.Urdf.Joint::safetyController
	SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 * ___safetyController_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}

	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___origin_2)); }
	inline Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * get_origin_2() const { return ___origin_2; }
	inline Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 ** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_2), (void*)value);
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___parent_3)); }
	inline String_t* get_parent_3() const { return ___parent_3; }
	inline String_t** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(String_t* value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
	}

	inline static int32_t get_offset_of_child_4() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___child_4)); }
	inline String_t* get_child_4() const { return ___child_4; }
	inline String_t** get_address_of_child_4() { return &___child_4; }
	inline void set_child_4(String_t* value)
	{
		___child_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_4), (void*)value);
	}

	inline static int32_t get_offset_of_axis_5() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___axis_5)); }
	inline Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * get_axis_5() const { return ___axis_5; }
	inline Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 ** get_address_of_axis_5() { return &___axis_5; }
	inline void set_axis_5(Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * value)
	{
		___axis_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axis_5), (void*)value);
	}

	inline static int32_t get_offset_of_calibration_6() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___calibration_6)); }
	inline Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D * get_calibration_6() const { return ___calibration_6; }
	inline Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D ** get_address_of_calibration_6() { return &___calibration_6; }
	inline void set_calibration_6(Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D * value)
	{
		___calibration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibration_6), (void*)value);
	}

	inline static int32_t get_offset_of_dynamics_7() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___dynamics_7)); }
	inline Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * get_dynamics_7() const { return ___dynamics_7; }
	inline Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 ** get_address_of_dynamics_7() { return &___dynamics_7; }
	inline void set_dynamics_7(Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * value)
	{
		___dynamics_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dynamics_7), (void*)value);
	}

	inline static int32_t get_offset_of_limit_8() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___limit_8)); }
	inline Limit_t8B3010548996C99E84D77A6B895243131E180DAC * get_limit_8() const { return ___limit_8; }
	inline Limit_t8B3010548996C99E84D77A6B895243131E180DAC ** get_address_of_limit_8() { return &___limit_8; }
	inline void set_limit_8(Limit_t8B3010548996C99E84D77A6B895243131E180DAC * value)
	{
		___limit_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___limit_8), (void*)value);
	}

	inline static int32_t get_offset_of_mimic_9() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___mimic_9)); }
	inline Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 * get_mimic_9() const { return ___mimic_9; }
	inline Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 ** get_address_of_mimic_9() { return &___mimic_9; }
	inline void set_mimic_9(Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 * value)
	{
		___mimic_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mimic_9), (void*)value);
	}

	inline static int32_t get_offset_of_safetyController_10() { return static_cast<int32_t>(offsetof(Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16, ___safetyController_10)); }
	inline SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 * get_safetyController_10() const { return ___safetyController_10; }
	inline SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 ** get_address_of_safetyController_10() { return &___safetyController_10; }
	inline void set_safetyController_10(SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 * value)
	{
		___safetyController_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safetyController_10), (void*)value);
	}
};


// RosSharp.Urdf.Joint/Axis
struct Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981  : public RuntimeObject
{
public:
	// System.Double[] RosSharp.Urdf.Joint/Axis::xyz
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___xyz_0;

public:
	inline static int32_t get_offset_of_xyz_0() { return static_cast<int32_t>(offsetof(Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981, ___xyz_0)); }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* get_xyz_0() const { return ___xyz_0; }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D** get_address_of_xyz_0() { return &___xyz_0; }
	inline void set_xyz_0(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* value)
	{
		___xyz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___xyz_0), (void*)value);
	}
};


// RosSharp.Urdf.Joint/Calibration
struct Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Joint/Dynamics
struct Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Joint/Dynamics::damping
	double ___damping_0;
	// System.Double RosSharp.Urdf.Joint/Dynamics::friction
	double ___friction_1;

public:
	inline static int32_t get_offset_of_damping_0() { return static_cast<int32_t>(offsetof(Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414, ___damping_0)); }
	inline double get_damping_0() const { return ___damping_0; }
	inline double* get_address_of_damping_0() { return &___damping_0; }
	inline void set_damping_0(double value)
	{
		___damping_0 = value;
	}

	inline static int32_t get_offset_of_friction_1() { return static_cast<int32_t>(offsetof(Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414, ___friction_1)); }
	inline double get_friction_1() const { return ___friction_1; }
	inline double* get_address_of_friction_1() { return &___friction_1; }
	inline void set_friction_1(double value)
	{
		___friction_1 = value;
	}
};


// RosSharp.Urdf.Joint/Limit
struct Limit_t8B3010548996C99E84D77A6B895243131E180DAC  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Joint/Limit::lower
	double ___lower_0;
	// System.Double RosSharp.Urdf.Joint/Limit::upper
	double ___upper_1;
	// System.Double RosSharp.Urdf.Joint/Limit::effort
	double ___effort_2;
	// System.Double RosSharp.Urdf.Joint/Limit::velocity
	double ___velocity_3;

public:
	inline static int32_t get_offset_of_lower_0() { return static_cast<int32_t>(offsetof(Limit_t8B3010548996C99E84D77A6B895243131E180DAC, ___lower_0)); }
	inline double get_lower_0() const { return ___lower_0; }
	inline double* get_address_of_lower_0() { return &___lower_0; }
	inline void set_lower_0(double value)
	{
		___lower_0 = value;
	}

	inline static int32_t get_offset_of_upper_1() { return static_cast<int32_t>(offsetof(Limit_t8B3010548996C99E84D77A6B895243131E180DAC, ___upper_1)); }
	inline double get_upper_1() const { return ___upper_1; }
	inline double* get_address_of_upper_1() { return &___upper_1; }
	inline void set_upper_1(double value)
	{
		___upper_1 = value;
	}

	inline static int32_t get_offset_of_effort_2() { return static_cast<int32_t>(offsetof(Limit_t8B3010548996C99E84D77A6B895243131E180DAC, ___effort_2)); }
	inline double get_effort_2() const { return ___effort_2; }
	inline double* get_address_of_effort_2() { return &___effort_2; }
	inline void set_effort_2(double value)
	{
		___effort_2 = value;
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(Limit_t8B3010548996C99E84D77A6B895243131E180DAC, ___velocity_3)); }
	inline double get_velocity_3() const { return ___velocity_3; }
	inline double* get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(double value)
	{
		___velocity_3 = value;
	}
};


// RosSharp.Urdf.Joint/Mimic
struct Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Joint/SafetyController
struct SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Link
struct Link_t144A468345BA1A69A3B8BACD7320E09A860EDB43  : public RuntimeObject
{
public:

public:
};


// RosSharp.Urdf.Link/Inertial
struct Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Link/Inertial::mass
	double ___mass_0;
	// RosSharp.Urdf.Origin RosSharp.Urdf.Link/Inertial::origin
	Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * ___origin_1;
	// RosSharp.Urdf.Link/Inertial/Inertia RosSharp.Urdf.Link/Inertial::inertia
	Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * ___inertia_2;

public:
	inline static int32_t get_offset_of_mass_0() { return static_cast<int32_t>(offsetof(Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410, ___mass_0)); }
	inline double get_mass_0() const { return ___mass_0; }
	inline double* get_address_of_mass_0() { return &___mass_0; }
	inline void set_mass_0(double value)
	{
		___mass_0 = value;
	}

	inline static int32_t get_offset_of_origin_1() { return static_cast<int32_t>(offsetof(Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410, ___origin_1)); }
	inline Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * get_origin_1() const { return ___origin_1; }
	inline Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 ** get_address_of_origin_1() { return &___origin_1; }
	inline void set_origin_1(Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * value)
	{
		___origin_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___origin_1), (void*)value);
	}

	inline static int32_t get_offset_of_inertia_2() { return static_cast<int32_t>(offsetof(Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410, ___inertia_2)); }
	inline Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * get_inertia_2() const { return ___inertia_2; }
	inline Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F ** get_address_of_inertia_2() { return &___inertia_2; }
	inline void set_inertia_2(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * value)
	{
		___inertia_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inertia_2), (void*)value);
	}
};


// RosSharp.Urdf.Link/Inertial/Inertia
struct Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F  : public RuntimeObject
{
public:
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixx
	double ___ixx_0;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixy
	double ___ixy_1;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::ixz
	double ___ixz_2;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::iyy
	double ___iyy_3;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::iyz
	double ___iyz_4;
	// System.Double RosSharp.Urdf.Link/Inertial/Inertia::izz
	double ___izz_5;

public:
	inline static int32_t get_offset_of_ixx_0() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___ixx_0)); }
	inline double get_ixx_0() const { return ___ixx_0; }
	inline double* get_address_of_ixx_0() { return &___ixx_0; }
	inline void set_ixx_0(double value)
	{
		___ixx_0 = value;
	}

	inline static int32_t get_offset_of_ixy_1() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___ixy_1)); }
	inline double get_ixy_1() const { return ___ixy_1; }
	inline double* get_address_of_ixy_1() { return &___ixy_1; }
	inline void set_ixy_1(double value)
	{
		___ixy_1 = value;
	}

	inline static int32_t get_offset_of_ixz_2() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___ixz_2)); }
	inline double get_ixz_2() const { return ___ixz_2; }
	inline double* get_address_of_ixz_2() { return &___ixz_2; }
	inline void set_ixz_2(double value)
	{
		___ixz_2 = value;
	}

	inline static int32_t get_offset_of_iyy_3() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___iyy_3)); }
	inline double get_iyy_3() const { return ___iyy_3; }
	inline double* get_address_of_iyy_3() { return &___iyy_3; }
	inline void set_iyy_3(double value)
	{
		___iyy_3 = value;
	}

	inline static int32_t get_offset_of_iyz_4() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___iyz_4)); }
	inline double get_iyz_4() const { return ___iyz_4; }
	inline double* get_address_of_iyz_4() { return &___iyz_4; }
	inline void set_iyz_4(double value)
	{
		___iyz_4 = value;
	}

	inline static int32_t get_offset_of_izz_5() { return static_cast<int32_t>(offsetof(Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F, ___izz_5)); }
	inline double get_izz_5() const { return ___izz_5; }
	inline double* get_address_of_izz_5() { return &___izz_5; }
	inline void set_izz_5(double value)
	{
		___izz_5 = value;
	}
};


// RosSharp.Urdf.Origin
struct Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66  : public RuntimeObject
{
public:
	// System.Double[] RosSharp.Urdf.Origin::Xyz
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___Xyz_0;
	// System.Double[] RosSharp.Urdf.Origin::Rpy
	DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___Rpy_1;

public:
	inline static int32_t get_offset_of_Xyz_0() { return static_cast<int32_t>(offsetof(Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66, ___Xyz_0)); }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* get_Xyz_0() const { return ___Xyz_0; }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D** get_address_of_Xyz_0() { return &___Xyz_0; }
	inline void set_Xyz_0(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* value)
	{
		___Xyz_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Xyz_0), (void*)value);
	}

	inline static int32_t get_offset_of_Rpy_1() { return static_cast<int32_t>(offsetof(Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66, ___Rpy_1)); }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* get_Rpy_1() const { return ___Rpy_1; }
	inline DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D** get_address_of_Rpy_1() { return &___Rpy_1; }
	inline void set_Rpy_1(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* value)
	{
		___Rpy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Rpy_1), (void*)value);
	}
};


// RosSharp.Urdf.Plugin
struct Plugin_t5AA3372B6CCEECED22FBC300DC3821055231415C  : public RuntimeObject
{
public:
	// System.String RosSharp.Urdf.Plugin::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(Plugin_t5AA3372B6CCEECED22FBC300DC3821055231415C, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Joint::.ctor(System.String,System.String,System.String,System.String,RosSharp.Urdf.Origin,RosSharp.Urdf.Joint/Axis,RosSharp.Urdf.Joint/Calibration,RosSharp.Urdf.Joint/Dynamics,RosSharp.Urdf.Joint/Limit,RosSharp.Urdf.Joint/Mimic,RosSharp.Urdf.Joint/SafetyController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint__ctor_m35FDCA31D90D333ADA8EE5E1AD4DBBCA76DF99D5 (Joint_t374B1CF3837381F3C2D14BA9575EE215A718FF16 * __this, String_t* ___name0, String_t* ___type1, String_t* ___parent2, String_t* ___child3, Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * ___origin4, Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * ___axis5, Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D * ___calibration6, Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * ___dynamics7, Limit_t8B3010548996C99E84D77A6B895243131E180DAC * ___limit8, Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 * ___mimic9, SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 * ___safetyController10, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_name_0(L_0);
		String_t* L_1 = ___type1;
		__this->set_type_1(L_1);
		String_t* L_2 = ___parent2;
		__this->set_parent_3(L_2);
		String_t* L_3 = ___child3;
		__this->set_child_4(L_3);
		Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * L_4 = ___origin4;
		__this->set_origin_2(L_4);
		Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * L_5 = ___axis5;
		__this->set_axis_5(L_5);
		Calibration_t83042FBB762D6D6A98B97D4C8AD86AEFE763DA7D * L_6 = ___calibration6;
		__this->set_calibration_6(L_6);
		Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * L_7 = ___dynamics7;
		__this->set_dynamics_7(L_7);
		Limit_t8B3010548996C99E84D77A6B895243131E180DAC * L_8 = ___limit8;
		__this->set_limit_8(L_8);
		Mimic_t3AAE9A5BCC00BBC46D64280D072CEA9FD7D5AEB5 * L_9 = ___mimic9;
		__this->set_mimic_9(L_9);
		SafetyController_t44EFBCC72B9962155470F217B3374949D1E87325 * L_10 = ___safetyController10;
		__this->set_safetyController_10(L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Joint/Axis::.ctor(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Axis__ctor_m9F95EA67918C0274870F42AACD8C1FA19C3310CD (Axis_tF7FDA035D5E60F2D1442E2DEC0BB7DF9C15C4981 * __this, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___xyz0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_0 = ___xyz0;
		__this->set_xyz_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Joint/Dynamics::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dynamics__ctor_m1B13D523444AEF8578224AB936AD851AF6E925D3 (Dynamics_t965397E4DD9705591E5AB11D035A274F4528D414 * __this, double ___damping0, double ___friction1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		double L_0 = ___damping0;
		__this->set_damping_0(L_0);
		double L_1 = ___friction1;
		__this->set_friction_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Joint/Limit::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Limit__ctor_mFD5B6ECEC97A4CD85A5BC0BE98D46CFFC5B6E54A (Limit_t8B3010548996C99E84D77A6B895243131E180DAC * __this, double ___lower0, double ___upper1, double ___effort2, double ___velocity3, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		double L_0 = ___lower0;
		__this->set_lower_0(L_0);
		double L_1 = ___upper1;
		__this->set_upper_1(L_1);
		double L_2 = ___effort2;
		__this->set_effort_2(L_2);
		double L_3 = ___velocity3;
		__this->set_velocity_3(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Link/Inertial::.ctor(System.Double,RosSharp.Urdf.Origin,RosSharp.Urdf.Link/Inertial/Inertia)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inertial__ctor_m4918DC07139930D69F1522B5F094F91FB78C0F26 (Inertial_t75AB858DDB03F901090349EACEFB2CA7B1057410 * __this, double ___mass0, Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * ___origin1, Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * ___inertia2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		double L_0 = ___mass0;
		__this->set_mass_0(L_0);
		Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * L_1 = ___origin1;
		__this->set_origin_1(L_1);
		Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * L_2 = ___inertia2;
		__this->set_inertia_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Link/Inertial/Inertia::.ctor(System.Double,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inertia__ctor_mF432344377B68501936BF8C38EE7A7723D29D46A (Inertia_tC70BDA6E4E071D88886E143AE20B144C3CDFCA2F * __this, double ___ixx0, double ___ixy1, double ___ixz2, double ___iyy3, double ___iyz4, double ___izz5, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		double L_0 = ___ixx0;
		__this->set_ixx_0(L_0);
		double L_1 = ___ixy1;
		__this->set_ixy_1(L_1);
		double L_2 = ___ixz2;
		__this->set_ixz_2(L_2);
		double L_3 = ___iyy3;
		__this->set_iyy_3(L_3);
		double L_4 = ___iyz4;
		__this->set_iyz_4(L_4);
		double L_5 = ___izz5;
		__this->set_izz_5(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Origin::.ctor(System.Double[],System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Origin__ctor_m0EE2EA408024D16B2DCB89717E58A705134EEECB (Origin_t6E5CCF3713F7E9FD746AC31143036CB898C5BD66 * __this, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___xyz0, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___rpy1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_0 = ___xyz0;
		__this->set_Xyz_0(L_0);
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_1 = ___rpy1;
		__this->set_Rpy_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RosSharp.Urdf.Plugin::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin__ctor_m75671E3C0D9794F6F5F3BD263F3EBA60A9335126 (Plugin_t5AA3372B6CCEECED22FBC300DC3821055231415C * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		__this->set_text_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
