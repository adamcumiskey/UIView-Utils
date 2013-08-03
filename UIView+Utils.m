//
//  UIView+Utils.m
//
//  Created by Adam Cumiskey on 6/25/13.
//  Copyright (c) 2013. All rights reserved.
//

#import "UIView+Utils.h"

@implementation UIView (Utils)

#pragma mark - Getters

- (CGFloat)originX
{
    return self.frame.origin.x;
}

- (CGFloat)originY
{
    return self.frame.origin.y;
}

- (CGFloat)frameHeight
{
    return self.frame.size.height;
}

- (CGFloat)frameWidth
{
    return self.frame.size.width;
}

#pragma mark - Setters

- (void)setOriginX:(CGFloat)x
{
    CGRect viewFrame = self.frame;
    viewFrame.origin.x = x;
    self.frame = viewFrame;
}

- (void)setOriginY:(CGFloat)y
{
    CGRect viewFrame = self.frame;
    viewFrame.origin.y = y;
    self.frame = viewFrame;
}

- (void)setWidth:(CGFloat)width
{
    CGRect viewFrame = self.frame;
    viewFrame.size.width = width;
    self.frame = viewFrame;
}

- (void)setHeight:(CGFloat)height
{
    CGRect viewFrame = self.frame;
    viewFrame.size.height = height;
    self.frame = viewFrame;
}

#pragma mark - View Placement

- (void)placeViewAboveView:(UIView *)view withPadding:(CGFloat)padding
{
    [self setOriginY:([view originY] - [self frameHeight] - padding)];
}

- (void)placeViewBelowView:(UIView *)view withPadding:(CGFloat)padding
{
    [self setOriginY:([view originY] + [view frameHeight] + padding)];
}

- (void)placeViewRightOfView:(UIView *)view withPadding:(CGFloat)padding
{
    [self setOriginX:([view originX] + [view frameWidth] + padding)];
}

- (void)placeViewLeftOfView:(UIView *)view withPadding:(CGFloat)padding
{
    [self setOriginX:([view originX] - [self frameWidth] - padding)];
}

@end
