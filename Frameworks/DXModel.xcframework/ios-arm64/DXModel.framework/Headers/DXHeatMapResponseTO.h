
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXHeatMapResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO || defined(INCLUDE_DXHeatMapResponseTO))
#define DXHeatMapResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXHeatMapResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXHeatMapResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXHeatMapResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXHeatMapResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXHeatMapResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getData;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDataWithPSListTO:(PSListTO *)data;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXHeatMapResponseTO)

inline DXHeatMapResponseTO *DXHeatMapResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXHeatMapResponseTO *DXHeatMapResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXHeatMapResponseTO, EMPTY, DXHeatMapResponseTO *)

FOUNDATION_EXPORT void DXHeatMapResponseTO_init(DXHeatMapResponseTO *self);

FOUNDATION_EXPORT DXHeatMapResponseTO *new_DXHeatMapResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXHeatMapResponseTO *create_DXHeatMapResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXHeatMapResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO DXHeatMapResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiHeatmapHeatMapResponseTO")
