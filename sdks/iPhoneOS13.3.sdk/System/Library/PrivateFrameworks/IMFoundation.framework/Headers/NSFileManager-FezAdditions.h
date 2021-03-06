//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FezAdditions)
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id )arg3 error:(id )arg4;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id )arg3 error:(id )arg4;
- (BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id )arg3 error:(id )arg4 asCopy:(BOOL)arg5;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (BOOL)_isPathOnMissingVolume:(id)arg1;
- (id)_randomSimilarFilePathAsPath:(id)arg1;
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_generateLinkForURL:(id)arg1;
@end

