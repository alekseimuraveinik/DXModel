
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEditorParameters_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters || defined(INCLUDE_DXMARKETOrderEditorParameters))
#define DXMARKETOrderEditorParameters_

@class DXOrderEditorParametersTO;
@class DXOrderValidationDetailsTO;

@protocol DXMARKETOrderEditorParameters < JavaObject >

- (void)initOrderEditorParamsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details OBJC_METHOD_FAMILY_NONE;

- (jboolean)validate;

- (DXOrderEditorParametersTO *)constructParameters;

- (void)cacheParameters;

- (void)restoreParameters;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEditorParameters)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEditorParameters)

#define ComDevexpertsDxmarketClientModelOrderOrderEditorParameters DXMARKETOrderEditorParameters

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters")
