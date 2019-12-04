//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerStatusObserving-Protocol.h>

@class NSError, NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving>
{
    id /* block */ changeBlock;
    NSError *_error;
    SVPlayer *_player;
    SVKeyValueObserver *_statusObserver;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property(readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic, setter=onChange:) id /* block */ changeBlock; // @synthesize changeBlock;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
