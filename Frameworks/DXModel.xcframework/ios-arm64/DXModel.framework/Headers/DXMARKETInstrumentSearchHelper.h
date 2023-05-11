
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETInstrumentSearchHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper || defined(INCLUDE_DXMARKETInstrumentSearchHelper))
#define DXMARKETInstrumentSearchHelper_

@class DXInstrumentTO;
@class DXInstrumentsRequestTO;
@class DXInstrumentsResponseTO;
@class DXMARKETPreparedSearchResult;
@class PSStringListTO;
@protocol JavaUtilList;

@interface DXMARKETInstrumentSearchHelper : NSObject

#pragma mark Public

+ (jboolean)hasInstrumentWithJavaUtilList:(id<JavaUtilList>)instrumentList
                       withDXInstrumentTO:(DXInstrumentTO *)instrument;

+ (DXMARKETPreparedSearchResult *)prepareListsWithDXInstrumentsRequestTO:(DXInstrumentsRequestTO *)request
                                             withDXInstrumentsResponseTO:(DXInstrumentsResponseTO *)item
                                                      withPSStringListTO:(PSStringListTO *)currentWatchlist;

@end

J2OBJC_STATIC_INIT(DXMARKETInstrumentSearchHelper)

FOUNDATION_EXPORT DXMARKETPreparedSearchResult *DXMARKETInstrumentSearchHelper_prepareListsWithDXInstrumentsRequestTO_withDXInstrumentsResponseTO_withPSStringListTO_(DXInstrumentsRequestTO *request, DXInstrumentsResponseTO *item, PSStringListTO *currentWatchlist);

FOUNDATION_EXPORT jboolean DXMARKETInstrumentSearchHelper_hasInstrumentWithJavaUtilList_withDXInstrumentTO_(id<JavaUtilList> instrumentList, DXInstrumentTO *instrument);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETInstrumentSearchHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper DXMARKETInstrumentSearchHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelInstrumentInstrumentSearchHelper")
