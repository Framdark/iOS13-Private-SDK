//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlayerResponse, MPModelGenericObject;

@interface MPCPlayerResponseSection : NSObject
{
    MPCPlayerResponse *_response;
    MPModelGenericObject *_metadataObject;
}

@property(readonly, nonatomic) MPModelGenericObject *metadataObject; // @synthesize metadataObject=_metadataObject;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
- (id)remove;
- (id)initWithModelGenericObject:(id)arg1 response:(id)arg2;

@end
