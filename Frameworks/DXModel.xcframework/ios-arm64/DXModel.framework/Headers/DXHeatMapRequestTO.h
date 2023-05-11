
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXHeatMapRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO || defined(INCLUDE_DXHeatMapRequestTO))
#define DXHeatMapRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXHeatMapRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXHeatMapRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXHeatMapRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXHeatMapRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXHeatMapRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getParameters;

- (PSStringListTO *)getSubscription;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setParametersWithPSListTO:(PSListTO *)parameters;

- (void)setSubscriptionWithPSStringListTO:(PSStringListTO *)subscription;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXHeatMapRequestTO)

inline DXHeatMapRequestTO *DXHeatMapRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapRequestTO *DXHeatMapRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapRequestTO, EMPTY, DXHeatMapRequestTO *)

FOUNDATION_EXPORT void DXHeatMapRequestTO_init(DXHeatMapRequestTO *self);

FOUNDATION_EXPORT DXHeatMapRequestTO *new_DXHeatMapRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapRequestTO *create_DXHeatMapRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXHeatMapRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO DXHeatMapRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapRequestTO")
