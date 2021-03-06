//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSRemoteControlClientDelegate, OS_dispatch_queue;

@interface CSRemoteControlClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id <CSRemoteControlClientDelegate> _delegate;
}

@property(nonatomic) __weak id <CSRemoteControlClientDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)isConnected;
- (BOOL)waitingForConnection:(double)arg1 error:(id )arg2;
- (void)dealloc;
- (id)init;

@end

