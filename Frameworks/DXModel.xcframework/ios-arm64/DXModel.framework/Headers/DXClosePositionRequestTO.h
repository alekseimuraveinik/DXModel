
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXClosePositionRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO || defined(INCLUDE_DXClosePositionRequestTO))
#define DXClosePositionRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXClosePositionRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXClosePositionRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXClosePositionRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey
                                    withNSString:(NSString *)symbol
                                    withNSString:(NSString *)positionCode;

- (instancetype __nonnull)initWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey
                                    withNSString:(NSString *)symbol
                                    withNSString:(NSString *)positionCode
                                    withNSString:(NSString *)targetPositionCode;

- (DXClosePositionRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXClosePositionRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (NSString *)getPositionCode;

- (NSString *)getSymbol;

- (NSString *)getTargetPositionCode;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setPositionCodeWithNSString:(NSString *)positionCode;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (void)setTargetPositionCodeWithNSString:(NSString *)targetPositionCode;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXClosePositionRequestTO)

inline DXClosePositionRequestTO *DXClosePositionRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXClosePositionRequestTO *DXClosePositionRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXClosePositionRequestTO, EMPTY, DXClosePositionRequestTO *)

FOUNDATION_EXPORT void DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXClosePositionRequestTO *self, DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode);

FOUNDATION_EXPORT DXClosePositionRequestTO *new_DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionRequestTO *create_DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode);

FOUNDATION_EXPORT void DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_withNSString_(DXClosePositionRequestTO *self, DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode, NSString *targetPositionCode);

FOUNDATION_EXPORT DXClosePositionRequestTO *new_DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode, NSString *targetPositionCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionRequestTO *create_DXClosePositionRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode, NSString *targetPositionCode);

FOUNDATION_EXPORT void DXClosePositionRequestTO_init(DXClosePositionRequestTO *self);

FOUNDATION_EXPORT DXClosePositionRequestTO *new_DXClosePositionRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXClosePositionRequestTO *create_DXClosePositionRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXClosePositionRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO DXClosePositionRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosePositionRequestTO")
