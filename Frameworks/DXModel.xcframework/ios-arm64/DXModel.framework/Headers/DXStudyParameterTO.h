
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyParameterTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO || defined(INCLUDE_DXStudyParameterTO))
#define DXStudyParameterTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXStudyParameterTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStudyParameterTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyParameterTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudyParameterTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudyParameterTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyParameterTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getLocalizedName;

- (NSString *)getName;

- (DXStudyParameterTypeEnum *)getType;

- (NSString *)getValue;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLocalizedNameWithNSString:(NSString *)localizedName;

- (void)setNameWithNSString:(NSString *)name;

- (void)setTypeWithDXStudyParameterTypeEnum:(DXStudyParameterTypeEnum *)type;

- (void)setValueWithNSString:(NSString *)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyParameterTO)

inline DXStudyParameterTO *DXStudyParameterTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTO *DXStudyParameterTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTO, EMPTY, DXStudyParameterTO *)

FOUNDATION_EXPORT void DXStudyParameterTO_init(DXStudyParameterTO *self);

FOUNDATION_EXPORT DXStudyParameterTO *new_DXStudyParameterTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterTO *create_DXStudyParameterTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyParameterTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO DXStudyParameterTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTO")
