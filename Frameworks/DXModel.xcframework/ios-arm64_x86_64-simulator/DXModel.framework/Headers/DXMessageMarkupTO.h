
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMessageMarkupTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO || defined(INCLUDE_DXMessageMarkupTO))
#define DXMessageMarkupTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMessageMarkupTO : PSBaseTransferObject
@property (readonly, class, strong) DXMessageMarkupTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMessageMarkupTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMessageMarkupTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMessageMarkupTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getFrom;

- (NSString *)getKey;

- (jint)getTo;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFromWithInt:(jint)from;

- (void)setKeyWithNSString:(NSString *)key;

- (void)setToWithInt:(jint)to;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMessageMarkupTO)

inline DXMessageMarkupTO *DXMessageMarkupTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMessageMarkupTO *DXMessageMarkupTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMessageMarkupTO, EMPTY, DXMessageMarkupTO *)

FOUNDATION_EXPORT void DXMessageMarkupTO_init(DXMessageMarkupTO *self);

FOUNDATION_EXPORT DXMessageMarkupTO *new_DXMessageMarkupTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMessageMarkupTO *create_DXMessageMarkupTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMessageMarkupTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO DXMessageMarkupTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageMarkupTO")
