
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMiniChartResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO || defined(INCLUDE_DXMiniChartResponseTO))
#define DXMiniChartResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXMiniChartResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXMiniChartResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMiniChartResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMiniChartResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMiniChartResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getMiniCharts;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMiniChartsWithPSListTO:(PSListTO *)miniCharts;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMiniChartResponseTO)

inline DXMiniChartResponseTO *DXMiniChartResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMiniChartResponseTO *DXMiniChartResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMiniChartResponseTO, EMPTY, DXMiniChartResponseTO *)

FOUNDATION_EXPORT void DXMiniChartResponseTO_init(DXMiniChartResponseTO *self);

FOUNDATION_EXPORT DXMiniChartResponseTO *new_DXMiniChartResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMiniChartResponseTO *create_DXMiniChartResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMiniChartResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO DXMiniChartResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartResponseTO")
