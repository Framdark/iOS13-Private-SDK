//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OCCancel, OITSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface OCMapper : NSObject
{
    OCCancel *mCancel;
    OITSUTemporaryDirectory *mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;
// - (void).cxx_destruct;
- (id)temporaryDirectoryPath;
- (void)teardown;
- (void)setup;
- (void)quit;
- (BOOL)isCancelled;
- (void)cancel;
- (id)init;

@end
