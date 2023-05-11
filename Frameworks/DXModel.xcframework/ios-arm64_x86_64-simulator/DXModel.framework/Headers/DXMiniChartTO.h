
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMiniChartTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO || defined(INCLUDE_DXMiniChartTO))
#define DXMiniChartTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXOptimizedChartTO;
@class DXQuoteTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMiniChartTO : PSBaseTransferObject
@property (readonly, class, strong) DXMiniChartTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMiniChartTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMiniChartTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMiniChartTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOptimizedChartTO *)getChart;

- (DXQuoteTO *)getQuote;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setChartWithDXOptimizedChartTO:(DXOptimizedChartTO *)chart;

- (void)setQuoteWithDXQuoteTO:(DXQuoteTO *)quote;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMiniChartTO)

inline DXMiniChartTO *DXMiniChartTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMiniChartTO *DXMiniChartTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMiniChartTO, EMPTY, DXMiniChartTO *)

FOUNDATION_EXPORT void DXMiniChartTO_init(DXMiniChartTO *self);

FOUNDATION_EXPORT DXMiniChartTO *new_DXMiniChartTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMiniChartTO *create_DXMiniChartTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMiniChartTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteMiniChartTO DXMiniChartTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartTO")
