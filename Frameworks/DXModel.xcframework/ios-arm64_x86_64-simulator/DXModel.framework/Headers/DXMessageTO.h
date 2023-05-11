
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMessageMessageTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMessageMessageTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMessageTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageTO || defined(INCLUDE_DXMessageTO))
#define DXMessageTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXMessageTO : PSBaseTransferObject
@property (readonly, class, strong) DXMessageTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMessageTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMessageTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMessageTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getMarkup;

- (NSString *)getMessage;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMarkupWithPSListTO:(PSListTO *)markup;

- (void)setMessageWithNSString:(NSString *)message;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMessageTO)

inline DXMessageTO *DXMessageTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMessageTO *DXMessageTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMessageTO, EMPTY, DXMessageTO *)

FOUNDATION_EXPORT void DXMessageTO_init(DXMessageTO *self);

FOUNDATION_EXPORT DXMessageTO *new_DXMessageTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMessageTO *create_DXMessageTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMessageTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMessageMessageTO DXMessageTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMessageMessageTO")
