
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXGetInstrumentsBySymbolRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO || defined(INCLUDE_DXGetInstrumentsBySymbolRequestTO))
#define DXGetInstrumentsBySymbolRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXGetInstrumentsBySymbolRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXGetInstrumentsBySymbolRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXGetInstrumentsBySymbolRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSStringListTO:(PSStringListTO *)symbolsToSearch;

- (DXGetInstrumentsBySymbolRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXGetInstrumentsBySymbolRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getSymbolsToSearch;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSymbolsToSearchWithPSStringListTO:(PSStringListTO *)symbolsToSearch;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXGetInstrumentsBySymbolRequestTO)

inline DXGetInstrumentsBySymbolRequestTO *DXGetInstrumentsBySymbolRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXGetInstrumentsBySymbolRequestTO *DXGetInstrumentsBySymbolRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXGetInstrumentsBySymbolRequestTO, EMPTY, DXGetInstrumentsBySymbolRequestTO *)

FOUNDATION_EXPORT void DXGetInstrumentsBySymbolRequestTO_initWithPSStringListTO_(DXGetInstrumentsBySymbolRequestTO *self, PSStringListTO *symbolsToSearch);

FOUNDATION_EXPORT DXGetInstrumentsBySymbolRequestTO *new_DXGetInstrumentsBySymbolRequestTO_initWithPSStringListTO_(PSStringListTO *symbolsToSearch) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXGetInstrumentsBySymbolRequestTO *create_DXGetInstrumentsBySymbolRequestTO_initWithPSStringListTO_(PSStringListTO *symbolsToSearch);

FOUNDATION_EXPORT void DXGetInstrumentsBySymbolRequestTO_init(DXGetInstrumentsBySymbolRequestTO *self);

FOUNDATION_EXPORT DXGetInstrumentsBySymbolRequestTO *new_DXGetInstrumentsBySymbolRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXGetInstrumentsBySymbolRequestTO *create_DXGetInstrumentsBySymbolRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXGetInstrumentsBySymbolRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO DXGetInstrumentsBySymbolRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentGetInstrumentsBySymbolRequestTO")
