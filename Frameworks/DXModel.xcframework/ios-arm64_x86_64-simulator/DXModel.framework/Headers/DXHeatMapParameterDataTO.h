
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXHeatMapParameterDataTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO || defined(INCLUDE_DXHeatMapParameterDataTO))
#define DXHeatMapParameterDataTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSLongListTO;
@protocol PSTransferObject;

@interface DXHeatMapParameterDataTO : PSBaseTransferObject
@property (readonly, class, strong) DXHeatMapParameterDataTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXHeatMapParameterDataTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXHeatMapParameterDataTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXHeatMapParameterDataTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getMaximum;

- (jlong)getMinimum;

- (jlong)getTotal;

- (PSLongListTO *)getValues;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMaximumWithLong:(jlong)maximum;

- (void)setMinimumWithLong:(jlong)minimum;

- (void)setTotalWithLong:(jlong)total;

- (void)setValuesWithPSLongListTO:(PSLongListTO *)values;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXHeatMapParameterDataTO)

inline DXHeatMapParameterDataTO *DXHeatMapParameterDataTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapParameterDataTO *DXHeatMapParameterDataTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapParameterDataTO, EMPTY, DXHeatMapParameterDataTO *)

FOUNDATION_EXPORT void DXHeatMapParameterDataTO_init(DXHeatMapParameterDataTO *self);

FOUNDATION_EXPORT DXHeatMapParameterDataTO *new_DXHeatMapParameterDataTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapParameterDataTO *create_DXHeatMapParameterDataTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXHeatMapParameterDataTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO DXHeatMapParameterDataTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapParameterDataTO")
