
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyParameterRangeTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO || defined(INCLUDE_DXStudyParameterRangeTO))
#define DXStudyParameterRangeTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXStudyParameterRangeTypeEnum;
@class DXStudyParameterTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXStudyParameterRangeTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyParameterRangeTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudyParameterRangeTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudyParameterRangeTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyParameterRangeTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getDelimitedValues;

- (NSString *)getFrom;

- (NSString *)getLocalizedName;

- (NSString *)getName;

- (NSString *)getStep;

- (NSString *)getTill;

- (DXStudyParameterRangeTypeEnum *)getType;

- (DXStudyParameterTO *)getValue;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDelimitedValuesWithPSStringListTO:(PSStringListTO *)delimitedValues;

- (void)setFromWithNSString:(NSString *)from;

- (void)setLocalizedNameWithNSString:(NSString *)localizedName;

- (void)setNameWithNSString:(NSString *)name;

- (void)setStepWithNSString:(NSString *)step;

- (void)setTillWithNSString:(NSString *)till;

- (void)setTypeWithDXStudyParameterRangeTypeEnum:(DXStudyParameterRangeTypeEnum *)type;

- (void)setValueWithDXStudyParameterTO:(DXStudyParameterTO *)value;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyParameterRangeTO)

inline DXStudyParameterRangeTO *DXStudyParameterRangeTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterRangeTO *DXStudyParameterRangeTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterRangeTO, EMPTY, DXStudyParameterRangeTO *)

FOUNDATION_EXPORT void DXStudyParameterRangeTO_init(DXStudyParameterRangeTO *self);

FOUNDATION_EXPORT DXStudyParameterRangeTO *new_DXStudyParameterRangeTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterRangeTO *create_DXStudyParameterRangeTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyParameterRangeTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO DXStudyParameterRangeTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTO")
