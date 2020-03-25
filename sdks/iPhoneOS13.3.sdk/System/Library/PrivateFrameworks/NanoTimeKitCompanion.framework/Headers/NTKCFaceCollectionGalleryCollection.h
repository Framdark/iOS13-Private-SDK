//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>

@class NTKFaceCollection;

@interface NTKCFaceCollectionGalleryCollection : NTKCGalleryCollection <NTKFaceCollectionObserver>
{
    NTKFaceCollection *_faceCollection;
}

// - (void).cxx_destruct;
- (void)faceCollectionDidReorderFaces:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (NSUInteger)indexOfFace:(id)arg1;
- (id)faceAtIndex:(NSUInteger)arg1;
- (NSUInteger)numberOfFaces;
- (id)collectionIdentifier;
- (id)initWithTitle:(id)arg1 faceCollection:(id)arg2;

@end
