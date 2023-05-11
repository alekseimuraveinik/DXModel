
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequest")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsRequest
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequest 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiNewsNewsRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXNewsRequest_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequest || defined(INCLUDE_DXNewsRequest))
#define DXNewsRequest_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXNewsRequest : PSBaseTransferObject
@property (readonly, class, strong) DXNewsRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXNewsRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithLong:(jlong)timestamp;

- (DXNewsRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXNewsRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getTimestamp;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTimestampWithLong:(jlong)timestamp;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXNewsRequest)

inline DXNewsRequest *DXNewsRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXNewsRequest *DXNewsRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXNewsRequest, EMPTY, DXNewsRequest *)

FOUNDATION_EXPORT void DXNewsRequest_initWithLong_(DXNewsRequest *self, jlong timestamp);

FOUNDATION_EXPORT DXNewsRequest *new_DXNewsRequest_initWithLong_(jlong timestamp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXNewsRequest *create_DXNewsRequest_initWithLong_(jlong timestamp);

FOUNDATION_EXPORT void DXNewsRequest_init(DXNewsRequest *self);

FOUNDATION_EXPORT DXNewsRequest *new_DXNewsRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXNewsRequest *create_DXNewsRequest_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXNewsRequest)

@compatibility_alias ComDevexpertsMobileDxplatformApiNewsNewsRequest DXNewsRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiNewsNewsRequest")
