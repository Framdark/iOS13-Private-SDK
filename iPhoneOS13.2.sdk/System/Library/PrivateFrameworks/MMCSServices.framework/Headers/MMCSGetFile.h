//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSGetFile : MMCSSimpleFile
{
    id /* block */ _block;
    id /* block */ _updateBlock;
}

@property(copy) id /* block */ progressUpdateBlock; // @synthesize progressUpdateBlock=_updateBlock;
@property(copy) id /* block */ completionBlock; // @synthesize completionBlock=_block;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end
