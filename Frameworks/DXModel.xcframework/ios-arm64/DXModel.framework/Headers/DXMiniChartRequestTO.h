
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMiniChartRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO || defined(INCLUDE_DXMiniChartRequestTO))
#define DXMiniChartRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXMiniChartRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXMiniChartRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMiniChartRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSStringListTO:(PSStringListTO *)instruments;

- (DXMiniChartRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMiniChartRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getInstruments;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentsWithPSStringListTO:(PSStringListTO *)instruments;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMiniChartRequestTO)

inline DXMiniChartRequestTO *DXMiniChartRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMiniChartRequestTO *DXMiniChartRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMiniChartRequestTO, EMPTY, DXMiniChartRequestTO *)

FOUNDATION_EXPORT void DXMiniChartRequestTO_initWithPSStringListTO_(DXMiniChartRequestTO *self, PSStringListTO *instruments);

FOUNDATION_EXPORT DXMiniChartRequestTO *new_DXMiniChartRequestTO_initWithPSStringListTO_(PSStringListTO *instruments) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMiniChartRequestTO *create_DXMiniChartRequestTO_initWithPSStringListTO_(PSStringListTO *instruments);

FOUNDATION_EXPORT void DXMiniChartRequestTO_init(DXMiniChartRequestTO *self);

FOUNDATION_EXPORT DXMiniChartRequestTO *new_DXMiniChartRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMiniChartRequestTO *create_DXMiniChartRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMiniChartRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO DXMiniChartRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteMiniChartRequestTO")
