//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLThumbFileManagerCore.h>

@interface PLThumbFileManager : PLThumbFileManagerCore
{
}

- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (_Bool)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2;
- (_Bool)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;

@end
