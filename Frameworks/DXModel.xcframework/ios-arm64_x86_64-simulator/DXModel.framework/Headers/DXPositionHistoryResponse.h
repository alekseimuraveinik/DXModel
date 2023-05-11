
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionHistoryResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse || defined(INCLUDE_DXPositionHistoryResponse))
#define DXPositionHistoryResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXPositionHistoryResponse : PSBaseTransferObject
@property (readonly, class, strong) DXPositionHistoryResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionHistoryResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSListTO:(PSListTO *)result
                                   withInt:(jint)totalSize;

- (DXPositionHistoryResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionHistoryResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getResult;

- (jint)getTotalSize;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setResultWithPSListTO:(PSListTO *)result;

- (void)setTotalSizeWithInt:(jint)totalSize;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionHistoryResponse)

inline DXPositionHistoryResponse *DXPositionHistoryResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionHistoryResponse *DXPositionHistoryResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionHistoryResponse, EMPTY, DXPositionHistoryResponse *)

FOUNDATION_EXPORT void DXPositionHistoryResponse_initWithPSListTO_withInt_(DXPositionHistoryResponse *self, PSListTO *result, jint totalSize);

FOUNDATION_EXPORT DXPositionHistoryResponse *new_DXPositionHistoryResponse_initWithPSListTO_withInt_(PSListTO *result, jint totalSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionHistoryResponse *create_DXPositionHistoryResponse_initWithPSListTO_withInt_(PSListTO *result, jint totalSize);

FOUNDATION_EXPORT void DXPositionHistoryResponse_init(DXPositionHistoryResponse *self);

FOUNDATION_EXPORT DXPositionHistoryResponse *new_DXPositionHistoryResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionHistoryResponse *create_DXPositionHistoryResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionHistoryResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse DXPositionHistoryResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryResponse")
