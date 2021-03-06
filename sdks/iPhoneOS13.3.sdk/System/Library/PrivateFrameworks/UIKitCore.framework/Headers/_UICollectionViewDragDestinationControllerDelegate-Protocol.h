//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, UIDragItem, _UICollectionViewDragDestinationController;
@protocol UIDragAnimating;

@protocol _UICollectionViewDragDestinationControllerDelegate <NSObject>
- (void)dragDestinationControllerSessionDidEnd:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerSessionWillBegin:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationControllerDidConcludeDrop:(_UICollectionViewDragDestinationController *)arg1;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didCompleteDropAnimationForDragItem:(UIDragItem *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willBeginDropAnimationForDragItem:(UIDragItem *)arg2 animator:(id <UIDragAnimating>)arg3;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 didPerformDropAtIndexPath:(NSIndexPath *)arg2;
- (void)dragDestinationController:(_UICollectionViewDragDestinationController *)arg1 willPerformDropAtIndexPath:(NSIndexPath *)arg2;
@end

