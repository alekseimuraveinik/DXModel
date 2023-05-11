
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsResponse")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsResponse
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsResponse 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsResponse 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsResponse

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXNewsResponse_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsResponse || defined(INCLUDE_DXNewsResponse))
#define DXNewsResponse_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@class PSListTO;
@protocol PSTransferObject;

@interface DXNewsResponse : PSBaseTransferObject
@property (readonly, class, strong) DXNewsResponse *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXNewsResponse *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXNewsResponse *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXNewsResponse *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (PSListTO *)getNewsDetails;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setNewsDetailsWithPSListTO:(PSListTO *)newsDetails;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXNewsResponse)

inline DXNewsResponse *DXNewsResponse_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXNewsResponse *DXNewsResponse_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXNewsResponse, EMPTY, DXNewsResponse *)

FOUNDATION_EXPORT void DXNewsResponse_init(DXNewsResponse *self);

FOUNDATION_EXPORT DXNewsResponse *new_DXNewsResponse_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXNewsResponse *create_DXNewsResponse_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXNewsResponse)

@compatibility_alias ComDevexpertsMobileDxplatformApiNewsNewsResponse DXNewsResponse;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsResponse")
