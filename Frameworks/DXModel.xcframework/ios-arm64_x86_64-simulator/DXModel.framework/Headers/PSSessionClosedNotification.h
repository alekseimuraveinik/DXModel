
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSSessionClosedNotification_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification || defined(INCLUDE_PSSessionClosedNotification))
#define PSSessionClosedNotification_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataResponse 1
#define INCLUDE_PSResponse 1
#include "PSResponse.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSResponse_Visitor;
@protocol PSTransferObject;

@interface PSSessionClosedNotification : PSResponse
@property (readonly, class, strong) PSSessionClosedNotification *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSSessionClosedNotification *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)error;

- (void)acceptWithPSResponse_Visitor:(id<PSResponse_Visitor>)visitor;

- (PSSessionClosedNotification *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSSessionClosedNotification *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSSessionClosedNotification)

inline PSSessionClosedNotification *PSSessionClosedNotification_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSSessionClosedNotification *PSSessionClosedNotification_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSSessionClosedNotification, EMPTY, PSSessionClosedNotification *)

FOUNDATION_EXPORT void PSSessionClosedNotification_initWithPSErrorTO_(PSSessionClosedNotification *self, PSErrorTO *error);

FOUNDATION_EXPORT PSSessionClosedNotification *new_PSSessionClosedNotification_initWithPSErrorTO_(PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionClosedNotification *create_PSSessionClosedNotification_initWithPSErrorTO_(PSErrorTO *error);

FOUNDATION_EXPORT void PSSessionClosedNotification_init(PSSessionClosedNotification *self);

FOUNDATION_EXPORT PSSessionClosedNotification *new_PSSessionClosedNotification_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSSessionClosedNotification *create_PSSessionClosedNotification_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSSessionClosedNotification)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification PSSessionClosedNotification;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataSessionClosedNotification")
