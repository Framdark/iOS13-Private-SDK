//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/GQDWPPadding.h>

__attribute__((visibility("hidden")))
@interface GQDSLPageMargins : GQDWPPadding
{
    float mHeader;
    float mFooter;
}

- (void)setRight:(float)arg1;
- (void)setLeft:(float)arg1;
- (void)setBottom:(float)arg1;
- (void)setTop:(float)arg1;
- (void)setFooter:(float)arg1;
- (float)footer;
- (void)setHeader:(float)arg1;
- (float)header;

@end
