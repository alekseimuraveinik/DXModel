
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPositionCloseByRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO || defined(INCLUDE_DXPositionCloseByRequestTO))
#define DXPositionCloseByRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXPositionCloseByRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXPositionCloseByRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXPositionCloseByRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey
                                    withNSString:(NSString *)symbol
                                    withNSString:(NSString *)positionCode;

- (DXPositionCloseByRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPositionCloseByRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (NSString *)getPositionCode;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setPositionCodeWithNSString:(NSString *)positionCode;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXPositionCloseByRequestTO)

inline DXPositionCloseByRequestTO *DXPositionCloseByRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPositionCloseByRequestTO *DXPositionCloseByRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPositionCloseByRequestTO, EMPTY, DXPositionCloseByRequestTO *)

FOUNDATION_EXPORT void DXPositionCloseByRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXPositionCloseByRequestTO *self, DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode);

FOUNDATION_EXPORT DXPositionCloseByRequestTO *new_DXPositionCloseByRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionCloseByRequestTO *create_DXPositionCloseByRequestTO_initWithDXAccountKeyTO_withNSString_withNSString_(DXAccountKeyTO *accountKey, NSString *symbol, NSString *positionCode);

FOUNDATION_EXPORT void DXPositionCloseByRequestTO_init(DXPositionCloseByRequestTO *self);

FOUNDATION_EXPORT DXPositionCloseByRequestTO *new_DXPositionCloseByRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPositionCloseByRequestTO *create_DXPositionCloseByRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPositionCloseByRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO DXPositionCloseByRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionClosebyPositionCloseByRequestTO")
