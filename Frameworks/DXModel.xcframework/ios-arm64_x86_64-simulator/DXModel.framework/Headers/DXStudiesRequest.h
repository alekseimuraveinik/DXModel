
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudiesRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest || defined(INCLUDE_DXStudiesRequest))
#define DXStudiesRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXStudiesRequest : PSBaseTransferObject
@property (readonly, class, strong) DXStudiesRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudiesRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudiesRequest *)change;

- (DXStudiesRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXStudiesRequest)

inline DXStudiesRequest *DXStudiesRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudiesRequest *DXStudiesRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudiesRequest, EMPTY, DXStudiesRequest *)

FOUNDATION_EXPORT void DXStudiesRequest_init(DXStudiesRequest *self);

FOUNDATION_EXPORT DXStudiesRequest *new_DXStudiesRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudiesRequest *create_DXStudiesRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudiesRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudiesRequest DXStudiesRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudiesRequest")
