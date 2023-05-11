
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSCreateAssemblerRequest_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest || defined(INCLUDE_PSCreateAssemblerRequest))
#define PSCreateAssemblerRequest_

#define RESTRICT_ComDevexpertsPipestoneApiProtocolDataRequest 1
#define INCLUDE_PSRequest 1
#include "PSRequest.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSRequest_Visitor;
@protocol PSTransferObject;

@interface PSCreateAssemblerRequest : PSRequest
@property (readonly, class, strong) PSCreateAssemblerRequest *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSCreateAssemblerRequest *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)feedId
                              withInt:(jint)assemblerTypeId;

- (void)acceptWithPSRequest_Visitor:(id<PSRequest_Visitor>)visitor;

- (PSCreateAssemblerRequest *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSCreateAssemblerRequest *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getAssemblerTypeId;

- (jint)getFeedId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAssemblerTypeIdWithInt:(jint)assemblerTypeId;

- (void)setFeedIdWithInt:(jint)feedId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSCreateAssemblerRequest)

inline PSCreateAssemblerRequest *PSCreateAssemblerRequest_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSCreateAssemblerRequest *PSCreateAssemblerRequest_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSCreateAssemblerRequest, EMPTY, PSCreateAssemblerRequest *)

FOUNDATION_EXPORT void PSCreateAssemblerRequest_init(PSCreateAssemblerRequest *self);

FOUNDATION_EXPORT PSCreateAssemblerRequest *new_PSCreateAssemblerRequest_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCreateAssemblerRequest *create_PSCreateAssemblerRequest_init(void);

FOUNDATION_EXPORT void PSCreateAssemblerRequest_initWithInt_withInt_(PSCreateAssemblerRequest *self, jint feedId, jint assemblerTypeId);

FOUNDATION_EXPORT PSCreateAssemblerRequest *new_PSCreateAssemblerRequest_initWithInt_withInt_(jint feedId, jint assemblerTypeId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSCreateAssemblerRequest *create_PSCreateAssemblerRequest_initWithInt_withInt_(jint feedId, jint assemblerTypeId);

J2OBJC_TYPE_LITERAL_HEADER(PSCreateAssemblerRequest)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest PSCreateAssemblerRequest;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataCreateAssemblerRequest")
