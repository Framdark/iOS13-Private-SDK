//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DACPLogShared : NSObject
{
    NSMutableDictionary *_UUIDToFileMap;
}

+ (id)shared;
// - (void).cxx_destruct;
- (BOOL)_slurpToFileUUID:(id)arg1 slurpeeFileDescriptor:(int)arg2 prefix:(id)arg3 suffix:(id)arg4 startNewFile:(BOOL)arg5 sizeCheck:(long long)arg6 wantsCompressed:(BOOL)arg7 maxLogFileCount:(int)arg8 outDidCreateNewFile:(BOOL )arg9 outNewFilePath:(id )arg10;
- (BOOL)_logData:(id)arg1 UUID:(id)arg2 startNewFile:(BOOL)arg3 sizeCheck:(long long)arg4 wantsCompressed:(BOOL)arg5 maxFileCount:(long long)arg6 outDidCreateNewFile:(BOOL )arg7 outNewFilePath:(id )arg8;
- (id)_getUUIDForFolder:(id)arg1 baseName:(id)arg2;
- (BOOL)_array:(id)arg1 beginsWithArray:(id)arg2 outRemainingArray:(id )arg3;
- (id)init;

@end

