//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject
{
    MPModelStorePlatformMetadataGenericObjectBuilder *_storePlatformBuilder;
    struct {
        unsigned int initialized:1;
        unsigned int trackNumber:1;
        unsigned int trackCount:1;
        struct {
            unsigned int identifiers:1;
            unsigned int bookmarkTime:1;
            unsigned int shouldRememberBookmarkTime:1;
            unsigned int hasBeenPlayed:1;
            unsigned int startTime:1;
            unsigned int stopTime:1;
            unsigned int storeUbiquitousIdentifier:1;
            unsigned int userPlayCount:1;
        } playbackPosition;
    } _requestedSongProperties;
    MPPropertySet *_requestedProperties;
}

@property(readonly, copy, nonatomic) MPPropertySet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
- (id)genericObjectForRadioStationTrack:(id)arg1 containerUniqueID:(id)arg2 userIdentity:(id)arg3;
- (id)initWithRequestedProperties:(id)arg1;

@end
