
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataPacket")
#ifdef RESTRICT_ComDevexpertsPipestoneApiProtocolDataPacket
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataPacket 0
#else
#define INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataPacket 1
#endif
#undef RESTRICT_ComDevexpertsPipestoneApiProtocolDataPacket

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PSPacket_) && (INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataPacket || defined(INCLUDE_PSPacket))
#define PSPacket_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface PSPacket : PSBaseTransferObject
@property (readonly, class, strong) PSPacket *EMPTY NS_SWIFT_NAME(EMPTY);

+ (PSPacket *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)content;

- (void)addWithPSTransferObject:(id<PSTransferObject>)item;

- (void)addAllWithJavaUtilList:(id<JavaUtilList>)items;

- (PSPacket *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (PSPacket *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getContent;

- (jint)getVersion;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setContentWithJavaUtilList:(id<JavaUtilList>)content;

- (void)setVersionWithInt:(jint)version_;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(PSPacket)

inline PSPacket *PSPacket_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSPacket *PSPacket_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(PSPacket, EMPTY, PSPacket *)

FOUNDATION_EXPORT void PSPacket_initWithJavaUtilCollection_(PSPacket *self, id<JavaUtilCollection> content);

FOUNDATION_EXPORT PSPacket *new_PSPacket_initWithJavaUtilCollection_(id<JavaUtilCollection> content) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPacket *create_PSPacket_initWithJavaUtilCollection_(id<JavaUtilCollection> content);

FOUNDATION_EXPORT void PSPacket_init(PSPacket *self);

FOUNDATION_EXPORT PSPacket *new_PSPacket_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PSPacket *create_PSPacket_init(void);

J2OBJC_TYPE_LITERAL_HEADER(PSPacket)

@compatibility_alias ComDevexpertsPipestoneApiProtocolDataPacket PSPacket;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsPipestoneApiProtocolDataPacket")
