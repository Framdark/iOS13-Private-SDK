//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIVideoAdvisoryLogoImageDownloader : NSObject
{
    TVImageProxy *_ratingImageProxy;
}

@property(retain, nonatomic) TVImageProxy *ratingImageProxy; // @synthesize ratingImageProxy=_ratingImageProxy;
- (void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(id /* block */)arg3;

@end
