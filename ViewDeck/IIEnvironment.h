//
//  IIEnvironment.h
//  IIViewDeck
//
//  Copyright (C) 2011-2016, ViewDeck
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
//  of the Software, and to permit persons to whom the Software is furnished to do
//  so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, IIViewDeckSide) {
    IIViewDeckSideNone = 0, /// This identifies no side, basically meaning that neither the left nor the right side is relevant.
    IIViewDeckSideLeft, /// This identifies the left view controller of an IIViewDeckController
    IIViewDeckSideRight, /// This identifies the right view controller of an IIViewDeckController

    IIViewDeckSideUnknown = IIViewDeckSideNone, /// This has the same logic as IIViewDeckSideNone but means that the side is yet unknown.

    IIViewDeckLeftSide __deprecated_enum_msg("Use IIViewDeckSideLeft instead.") = IIViewDeckSideLeft,
    IIViewDeckRightSide __deprecated_enum_msg("Use IIViewDeckSideRight instead.") = IIViewDeckSideRight,
};

/**
 Checks if the passed in side is describing a side view controller of an `IIViewDeckController`.

 @param side The side you want to check.

 @return `YES` if side is either of type `IIViewDeckSideLeft` or `IIViewDeckSideRight`.
 */
static inline BOOL IIViewDeckSideIsValid(IIViewDeckSide side) {
    return (side == IIViewDeckSideLeft || side == IIViewDeckSideRight);
}
