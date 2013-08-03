//
//  UIView+Utils.h
//
//  Created by Adam Cumiskey on 6/25/13.
//  Copyright (c) 2013. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Category for extending the UIView class
/*!
 I'm sure there's a great reason for a UIView frame's properties to all be read-only,
 however it's still a huge pain in the ass. These methods allow quick manipulation
 of a UIView's origin, size, and position without having to go through the hassle of
 figuring out a new CGRect for the frame, then reapplying it to the original view. Now 
 also includes getters.
 */
@interface UIView (Utils)

//! Get the x coordinate of the origin
/*!
 \return the x coordinate of the origin
 */
- (CGFloat)originX;

//! get the y coordinate of the origin
/*!
 \return the y coordinate of the origin
 */
- (CGFloat)originY;

//! get the height of the view's frame
/*!
 \return the height of the frame
 */
- (CGFloat)frameHeight;

//! get the width of the view's frame
/*!
 \return the width of the frame
 */
- (CGFloat)frameWidth;

//! Set the X position of a view
/*!
 \param x CGFloat of the desired x position
 */
- (void)setOriginX:(CGFloat)x;

//! Set the Y position of a view
/*!
 \param y CGFloat of the desired y position
 */
- (void)setOriginY:(CGFloat)y;

//! Set the width of a view
/*!
 \param width CGFloat of the new width
 */
- (void)setWidth:(CGFloat)width;

//! Set the height of a view
/*!
 \param height CGFloat of the new height
 */
- (void)setHeight:(CGFloat)height;

//! Position the reciver above the input view with a given amount of padding
/*!
 \param view The view that the receiver is positioned in relation to
 \param padding CGFloat representing the padding between the two views
 */
- (void)placeViewAboveView:(UIView *)view withPadding:(CGFloat)padding;

//! Position the reciver below the input view with a given amount of padding
/*!
 \param view The view that the receiver is positioned in relation to
 \param padding CGFloat representing the padding between the two views
 */
- (void)placeViewBelowView:(UIView *)view withPadding:(CGFloat)padding;

//! Position the reciver to the right of the input view with a given amount of padding
/*!
 \param view The view that the receiver is positioned in relation to
 \param padding CGFloat representing the padding between the two views
 */
- (void)placeViewRightOfView:(UIView *)view withPadding:(CGFloat)padding;

//! Position the reciver to the left of the input view with a given amount of padding
/*!
 \param view The view that the receiver is positioned in relation to
 \param padding CGFloat representing the padding between the two views
 */
- (void)placeViewLeftOfView:(UIView *)view withPadding:(CGFloat)padding;

@end
