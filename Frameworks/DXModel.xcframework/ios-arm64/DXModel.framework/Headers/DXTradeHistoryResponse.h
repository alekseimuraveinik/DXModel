
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXTradeHistoryResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse || defined(INCLUDE_DXTradeHistoryResponse))
#define DXTradeHistoryResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXTradeHistoryResponse : PSBaseTransferObject
@property (readonly, class, strong) DXTradeHistoryResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXTradeHistoryResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXTradeHistoryResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXTradeHistoryResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getResult;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setResultWithPSListTO:(PSListTO *)result;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXTradeHistoryResponse)

inline DXTradeHistoryResponse *DXTradeHistoryResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXTradeHistoryResponse *DXTradeHistoryResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXTradeHistoryResponse, EMPTY, DXTradeHistoryResponse *)

FOUNDATION_EXPORT void DXTradeHistoryResponse_init(DXTradeHistoryResponse *self);

FOUNDATION_EXPORT DXTradeHistoryResponse *new_DXTradeHistoryResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXTradeHistoryResponse *create_DXTradeHistoryResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXTradeHistoryResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse DXTradeHistoryResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiTradeTradeHistoryResponse")
