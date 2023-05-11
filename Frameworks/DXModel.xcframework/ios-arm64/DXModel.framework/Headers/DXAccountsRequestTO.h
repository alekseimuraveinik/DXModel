
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO || defined(INCLUDE_DXAccountsRequestTO))
#define DXAccountsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAccountsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountsRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getDisplayMetricsCurrency;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDisplayMetricsCurrencyWithNSString:(NSString *)displayMetricsCurrency;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountsRequestTO)

inline DXAccountsRequestTO *DXAccountsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountsRequestTO *DXAccountsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountsRequestTO, EMPTY, DXAccountsRequestTO *)

FOUNDATION_EXPORT void DXAccountsRequestTO_init(DXAccountsRequestTO *self);

FOUNDATION_EXPORT DXAccountsRequestTO *new_DXAccountsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountsRequestTO *create_DXAccountsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO DXAccountsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountsRequestTO")
