
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionHistoryRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest || defined(INCLUDE_DXPositionHistoryRequest))
#define DXPositionHistoryRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXPositionSideEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPositionHistoryRequest : PSBaseTransferObject
@property (readonly, class, strong) DXPositionHistoryRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionHistoryRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXPositionHistoryRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionHistoryRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getPageSize;

- (DXPositionSideEnum *)getSide;

- (jint)getStartIndex;

- (jlong)getTimeFrom;

- (jlong)getTimeTo;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setPageSizeWithInt:(jint)pageSize;

- (void)setSideWithDXPositionSideEnum:(DXPositionSideEnum *)side;

- (void)setStartIndexWithInt:(jint)startIndex;

- (void)setTimeFromWithLong:(jlong)timeFrom;

- (void)setTimeToWithLong:(jlong)timeTo;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionHistoryRequest)

inline DXPositionHistoryRequest *DXPositionHistoryRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionHistoryRequest *DXPositionHistoryRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionHistoryRequest, EMPTY, DXPositionHistoryRequest *)

FOUNDATION_EXPORT void DXPositionHistoryRequest_init(DXPositionHistoryRequest *self);

FOUNDATION_EXPORT DXPositionHistoryRequest *new_DXPositionHistoryRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionHistoryRequest *create_DXPositionHistoryRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionHistoryRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest DXPositionHistoryRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionHistoryPositionHistoryRequest")
