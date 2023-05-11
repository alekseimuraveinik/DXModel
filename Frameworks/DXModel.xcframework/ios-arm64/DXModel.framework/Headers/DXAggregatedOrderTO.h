
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAggregatedOrderTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO || defined(INCLUDE_DXAggregatedOrderTO))
#define DXAggregatedOrderTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXInstrumentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXAggregatedOrderTO : PSBaseTransferObject
@property (readonly, class, strong) DXAggregatedOrderTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAggregatedOrderTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAggregatedOrderTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAggregatedOrderTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (NSString *)getCode;

- (DXInstrumentTO *)getInstrument;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setCodeWithNSString:(NSString *)code;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setOrdersWithPSListTO:(PSListTO *)orders;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAggregatedOrderTO)

inline DXAggregatedOrderTO *DXAggregatedOrderTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAggregatedOrderTO *DXAggregatedOrderTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAggregatedOrderTO, EMPTY, DXAggregatedOrderTO *)

FOUNDATION_EXPORT void DXAggregatedOrderTO_init(DXAggregatedOrderTO *self);

FOUNDATION_EXPORT DXAggregatedOrderTO *new_DXAggregatedOrderTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAggregatedOrderTO *create_DXAggregatedOrderTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAggregatedOrderTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO DXAggregatedOrderTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderAggregatedOrderTO")
