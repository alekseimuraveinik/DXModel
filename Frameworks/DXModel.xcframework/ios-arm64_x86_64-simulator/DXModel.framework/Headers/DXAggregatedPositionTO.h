
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedPositionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO || defined(INCLUDE_DXAggregatedPositionTO))
#define DXAggregatedPositionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXInstrumentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAggregatedPositionTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedPositionTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedPositionTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedPositionTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAggregatedPositionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (NSString *)getCode;

- (jlong)getCurrentPrice;

- (jlong)getFillPrice;

- (jlong)getFpl;

- (DXInstrumentTO *)getInstrument;

- (jlong)getMargin;

- (PSListTO *)getPositions;

- (jdouble)getQuantity;

- (jlong)getSize;

- (jlong)getTotalCommissions;

- (jlong)getTotalFinancing;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setCodeWithNSString:(NSString *)code;

- (void)setCurrentPriceWithLong:(jlong)currentPrice;

- (void)setFillPriceWithLong:(jlong)fillPrice;

- (void)setFplWithLong:(jlong)fpl;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setMarginWithLong:(jlong)margin;

- (void)setPositionsWithPSListTO:(PSListTO *)positions;

- (void)setQuantityWithDouble:(jdouble)quantity;

- (void)setSizeWithLong:(jlong)size;

- (void)setTotalCommissionsWithLong:(jlong)totalCommissions;

- (void)setTotalFinancingWithLong:(jlong)totalFinancing;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAggregatedPositionTO)

inline DXAggregatedPositionTO *DXAggregatedPositionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedPositionTO *DXAggregatedPositionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedPositionTO, EMPTY, DXAggregatedPositionTO *)

FOUNDATION_EXPORT void DXAggregatedPositionTO_init(DXAggregatedPositionTO *self);

FOUNDATION_EXPORT DXAggregatedPositionTO *new_DXAggregatedPositionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedPositionTO *create_DXAggregatedPositionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedPositionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO DXAggregatedPositionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionAggregatedPositionTO")
