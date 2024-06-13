!USE rtchecks

FUNCTION bar_coord_2D(ARRAY(2) OF REAL position; ARRAY(2,3) OF REAL vert_pos)->ARRAY(3) OF REAL
    ARRAY(3) OF REAL bar_weights

    REAL det_T = (vert_pos(1,1)-vert_pos(1,3))*(vert_pos(2,2)-vert_pos(2,3)) - (vert_pos(2,1)-vert_pos(2,3))*(vert_pos(1,2)-vert_pos(1,3))
    bar_weights(1) = ((vert_pos(2,2)-vert_pos(2,3))*(position(1)-vert_pos(1,3)) + (vert_pos(1,3)-vert_pos(1,2))*(position(2)-vert_pos(2,3))) / det_T
    bar_weights(2) = ((vert_pos(2,3)-vert_pos(2,1))*(position(1)-vert_pos(1,3)) + (vert_pos(1,1)-vert_pos(1,3))*(position(2)-vert_pos(2,3))) / det_T
    bar_weights(3) = 1 - bar_weights(1) - bar_weights(2)

    RETURN bar_weights
END bar_coord_2D