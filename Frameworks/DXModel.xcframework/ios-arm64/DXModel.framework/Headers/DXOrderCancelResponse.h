
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderCancelResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse || defined(INCLUDE_DXOrderCancelResponse))
#define DXOrderCancelResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol DXOrderCancelResponseVisitor;
@protocol PSTransferObject;

@interface DXOrderCancelResponse : PSBaseTransferObject
@property (readonly, class, strong) DXOrderCancelResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderCancelResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderCancelResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderCancelResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSUInteger)hash;

- (void)makeFailedWithNSString:(NSString *)msg;

- (jboolean)makeReadOnly;

- (void)makeSuccessful;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (NSString *)description;

- (void)visitWithWithDXOrderCancelResponseVisitor:(id<DXOrderCancelResponseVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderCancelResponse)

inline DXOrderCancelResponse *DXOrderCancelResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderCancelResponse *DXOrderCancelResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderCancelResponse, EMPTY, DXOrderCancelResponse *)

FOUNDATION_EXPORT void DXOrderCancelResponse_init(DXOrderCancelResponse *self);

FOUNDATION_EXPORT DXOrderCancelResponse *new_DXOrderCancelResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderCancelResponse *create_DXOrderCancelResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderCancelResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse DXOrderCancelResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderCancelResponse")
