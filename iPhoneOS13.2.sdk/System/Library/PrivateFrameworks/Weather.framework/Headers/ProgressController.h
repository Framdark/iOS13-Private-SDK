//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface ProgressController : NSObject
{
    _Bool _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;
- (void)suspend;
- (void)setLoadingData:(_Bool)arg1;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)userScrolled;

@end
