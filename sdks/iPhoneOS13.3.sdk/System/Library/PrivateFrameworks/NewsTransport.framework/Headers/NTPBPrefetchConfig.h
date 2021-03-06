//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface NTPBPrefetchConfig : PBCodable <NSCopying>
{
    double _backgroundFetchMinimumInterval;
    long long _feedPrefetchFavoritesLimit;
    long long _prefetchedForYouExpiration;
    BOOL _backgroundFetchEnabled;
    BOOL _backgroundFetchEnabled2;
    BOOL _feedPrefetchForYou;
    struct {
        unsigned int backgroundFetchMinimumInterval:1;
        unsigned int feedPrefetchFavoritesLimit:1;
        unsigned int prefetchedForYouExpiration:1;
        unsigned int backgroundFetchEnabled:1;
        unsigned int backgroundFetchEnabled2:1;
        unsigned int feedPrefetchForYou:1;
    } _has;
}

@property(nonatomic) long long prefetchedForYouExpiration; // @synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration;
@property(nonatomic) BOOL backgroundFetchEnabled2; // @synthesize backgroundFetchEnabled2=_backgroundFetchEnabled2;
@property(nonatomic) long long feedPrefetchFavoritesLimit; // @synthesize feedPrefetchFavoritesLimit=_feedPrefetchFavoritesLimit;
@property(nonatomic) BOOL feedPrefetchForYou; // @synthesize feedPrefetchForYou=_feedPrefetchForYou;
@property(nonatomic) double backgroundFetchMinimumInterval; // @synthesize backgroundFetchMinimumInterval=_backgroundFetchMinimumInterval;
@property(nonatomic) BOOL backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPrefetchedForYouExpiration;
@property(nonatomic) BOOL hasBackgroundFetchEnabled2;
@property(nonatomic) BOOL hasFeedPrefetchFavoritesLimit;
@property(nonatomic) BOOL hasFeedPrefetchForYou;
@property(nonatomic) BOOL hasBackgroundFetchMinimumInterval;
@property(nonatomic) BOOL hasBackgroundFetchEnabled;

@end

