//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOStorefrontImagery;

@interface GEOStorefrontView : NSObject
{
    NSUInteger _identifier;
    GEOStorefrontImagery *_imageryInfo;
    struct GEOOrientedPosition _lookAt;
}

@property(readonly, nonatomic) struct GEOOrientedPosition lookAt; // @synthesize lookAt=_lookAt;
@property(readonly, nonatomic) GEOStorefrontImagery *imageryInfo; // @synthesize imageryInfo=_imageryInfo;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithStorefrontView:(id)arg1;
- (id)init;

@end

