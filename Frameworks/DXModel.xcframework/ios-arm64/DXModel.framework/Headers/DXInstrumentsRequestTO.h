
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO || defined(INCLUDE_DXInstrumentsRequestTO))
#define DXInstrumentsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentsSearchTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXInstrumentsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentsRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getDummy;

- (DXInstrumentsSearchTypeEnum *)getSearchType;

- (NSString *)getSubstring;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDummyWithNSString:(NSString *)dummy;

- (void)setSearchTypeWithDXInstrumentsSearchTypeEnum:(DXInstrumentsSearchTypeEnum *)searchType;

- (void)setSubstringWithNSString:(NSString *)substring;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentsRequestTO)

inline DXInstrumentsRequestTO *DXInstrumentsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentsRequestTO *DXInstrumentsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentsRequestTO, EMPTY, DXInstrumentsRequestTO *)

FOUNDATION_EXPORT void DXInstrumentsRequestTO_init(DXInstrumentsRequestTO *self);

FOUNDATION_EXPORT DXInstrumentsRequestTO *new_DXInstrumentsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentsRequestTO *create_DXInstrumentsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO DXInstrumentsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentsRequestTO")
